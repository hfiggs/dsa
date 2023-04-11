#ifndef DSA_INCLUDE_DSA_LINKED_LIST_H_
#define DSA_INCLUDE_DSA_LINKED_LIST_H_

namespace dsa
{
namespace linked_list
{

namespace impl
{

struct Node
{
  int value {};
  struct Node* next {};

  Node(int value, Node* next) : value {value}, next {next} {}
  Node(int value) : value {value}, next {nullptr} {}
};

} // namespace impl

class SinglyLinkedList
{
  public:
    SinglyLinkedList();
    int Size() const;
    int Get(int pos) const;
    bool Insert(int value, int pos);
    bool Remove(int pos);

  private:
    impl::Node* head_;
    int size_;
};

} // namespace dsa
} // namespace linked_list

#endif // DSA_INCLUDE_DSA_LINKED_LIST_H_
