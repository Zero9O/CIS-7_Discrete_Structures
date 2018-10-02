# CIS 7 - Discrete Structures - Assignment 2
# Part 1:
- [ ] Show that p->q and q' -> p' are logically equivalent without using truth tables or a "contrapositive" law (don't assume they are true)
```
p -> q     <=>  q' -> p'
p' v q     <=>  q' -> p'   Implication
q v p'     <=>  q' -> p'   Commutative
(q')' v p' <=>  q' -> p'   Double Negative
q' -> p'   <=>  q' -> p'   Implication
```
-----------------------------------------------------------------------------
- [ ] Show that (p->r) ^ (q->r) <=> (p v q) -> r
```
(p -> r) ^ (q -> r)   <=>   (p v q) -> r
(p' v r) ^ (q' v r)   <=>   (p v q)' v r          Implication
(p' v r) ^ (q' v r)   <=>   (p' ^ 'q) v r         De Morgan's
(p' v r) ^ (q' v r)   <=>   (p' v r) ^ (q' v r)   Distributive
```
-----------------------------------------------------------------------------
 - [ ] Give an interpretation to prove that the following wff is not valid:
 (Ǝx)A(x) ^ (Ǝx)B(x) -> (Ǝx)(A(x) ^ B(x))  
``
``
