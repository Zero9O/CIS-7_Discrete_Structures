p -> q     <=>  q' -> p'
p' v q     <=>  q' -> p'  Implication
q v p'     <=>  q' -> p'  Commutative
(q')' v p' <=>  q' -> p'  Double Negative
q' -> p'   <=>  q' -> p'  Implication

-----------------------------------------------------------------------------

(p -> r) ^ (q -> r)                           <=> (p v q) -> r
(p' v r) ^ (q -> r)                           <=> (p v q) -> r   Implication
(p' ^ (q -> r)) v (r ^ (q -> r))              <=> (p v q) -> r   Distributive
(p' ^ (q' v r)) v (r ^ (q' v r))              <=> (p v q) -> r   Implication
((p' ^ q') v (p' ^ r)) v ((r ^ q') v (r ^ r)) <=> (p v q) -> r   Distributive
