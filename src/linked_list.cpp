#include "dsa/linked_list.h"

#include <limits>

namespace dsa
{
namespace linked_list
{

SinglyLinkedList::SinglyLinkedList() : head_ {nullptr}, size_ {0} {}

int SinglyLinkedList::Size() const
{
  return size_;
}

int SinglyLinkedList::Get(int pos) const
{
  if ((pos < 0) || (pos > (size_ - 1)))
      return 0;

  impl::Node* node = head_;

  for (int i = 0; i < pos; ++i)
    node = node->next;

  return node->value;
}

bool SinglyLinkedList::Insert(int value, int pos)
{
  if (size_ == std::numeric_limits<int>::max())
    return false;

  if ((pos < 0) || (pos > size_))
    return false;

  // Special case to insert new node at beginning
  if (pos == 0)
  {
    impl::Node* new_node = new impl::Node(value, head_);
    head_ = new_node;
    ++size_;
    return true;
  }

  // Get node to insert new node after
  impl::Node* node = head_;
  for (int i = 0; i < (pos - 1); ++i)
    node = node->next;

  impl::Node* new_node = new impl::Node(value, node->next);
  node->next = new_node;
  ++size_;
  return true;
}

bool SinglyLinkedList::Remove(int pos)
{
  if ((pos < 0) || (pos > (size_ - 1)))
    return false;

  // Special case to remove first node
  if (pos == 0)
  {
    impl::Node* node_to_remove = head_;
    head_ = head_->next;
    delete node_to_remove;
    --size_;
    return true;
  }

  // Get node before node to remove
  impl::Node* node = head_;
  for (int i = 0; i < (pos - 1); ++i)
    node = node->next;

  impl::Node* node_to_remove = node->next;
  node->next = node->next->next;
  delete node_to_remove;
  --size_;
  return true;
}

} // namespace dsa
} // namespace linked_list
