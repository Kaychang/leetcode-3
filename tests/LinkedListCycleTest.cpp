#include "catch.hpp"

#include "LinkedListCycle.hpp"

TEST_CASE("Linked List Cycle") {
    LinkedListCycle s;
    SECTION("Sample test") {
        // (1 -> 4 -> 3 -> 2)

        ListNode *_2 = new ListNode(2);

        ListNode *_3 = new ListNode(3);
        _3->next = _2;

        ListNode *_4 = new ListNode(3);
        _4->next = _3;

        ListNode *_1 = new ListNode(1);
        _1->next = _4;

        REQUIRE_FALSE(s.hasCycle(_1));

        _2->next = _4;

        REQUIRE(s.hasCycle(_1));
    }
}
