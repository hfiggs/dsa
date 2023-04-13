#include <gtest/gtest.h>

#include "dsa/linked_list.h"

TEST(LinkedList, Example) {
  dsa::linked_list::SinglyLinkedList sll;
  EXPECT_EQ(sll.Size(), 0);
  bool didInsert = sll.Insert(69, 0);
  EXPECT_EQ(didInsert, true);
  EXPECT_EQ(sll.Size(), 1);
  EXPECT_EQ(sll.Get(0), 69);
  didInsert = sll.Insert(420, 0);
  EXPECT_EQ(didInsert, true);
  EXPECT_EQ(sll.Size(), 2);
  EXPECT_EQ(sll.Get(0), 420);
  didInsert = sll.Insert(33, 1);
  EXPECT_EQ(didInsert, true);
  EXPECT_EQ(sll.Size(), 3);
  EXPECT_EQ(sll.Get(1), 33);
  didInsert = sll.Insert(33, 5);
  EXPECT_EQ(didInsert, false);
  bool didRemove = sll.Remove(3);
  EXPECT_EQ(didRemove, false);
  didRemove = sll.Remove(0);
  EXPECT_EQ(didRemove, true);
  EXPECT_EQ(sll.Size(), 2);
  didRemove = sll.Remove(1);
  EXPECT_EQ(didRemove, true);
  EXPECT_EQ(sll.Size(), 1);
  EXPECT_EQ(sll.Get(0), 33);
}
