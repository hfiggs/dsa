#include <gtest/gtest.h>

#include "dsa/linked_list.h"

TEST(LinkedList, SizeEmpty) {
  dsa::linked_list::SinglyLinkedList sll;
  EXPECT_EQ(sll.Size(), 0);
}

TEST(LinkedList, SizeAfterGoodInsert) {
  dsa::linked_list::SinglyLinkedList sll;
  sll.Insert(1, 0);
  EXPECT_EQ(sll.Size(), 1);
}

TEST(LinkedList, SizeAfterGoodRemove) {
  dsa::linked_list::SinglyLinkedList sll;
  sll.Insert(1, 0);
  sll.Remove(0);
  EXPECT_EQ(sll.Size(), 0);
}

TEST(LinkedList, SizeAfterBadInsert) {
  dsa::linked_list::SinglyLinkedList sll;
  sll.Insert(1, 1);
  EXPECT_EQ(sll.Size(), 0);
}

TEST(LinkedList, SizeAfterBadRemove) {
  dsa::linked_list::SinglyLinkedList sll;
  sll.Insert(1, 0);
  sll.Remove(1);
  EXPECT_EQ(sll.Size(), 1);
}
