/*
Jordan goes to a shop to buy N shoes. After his purchase the shopkeeper offers him a crazy refund on his bill.

The shopkeeper tells Jordan that he can select any of the [N/2] shoes and the shopkeeper will refund the sum of the sqaure of the prices of those shoes.

Now, before buying the shoes, Jordan can perform an infinte number of the following operation:
1. Select any pair of shoes.
2. Lets' say their cost is A and B respectively.
3. Update the cost of the first shoe as (A OR B).
4. Update the cost of the second shoe as (A AND B).

Now, Jordan wonders what is the maximum refund he can get if the number and cost of the shoes are already decided. Help Jordan get the maximum benefit 
of this craziness. Print answer mod 10^9+7.


Task: Print the max refund Jordan can get mod 10^9 + 7.

Eaxmple:
N = 4
Prices: [1,2,3,4]

Ans:
1. Perform the operation on shoe 3 and 4.
2. Cost of shoe 3 becomes 3 OR 4 = 7 and shoes 4 becomes 3 AND 4 = 0
3. Perform the operation on shoe 1 and 2.
4. Cost of shoe 1 becomes 1 OR 2 = 3 and shoes 3 becomes 1 AND 2 = 0
5. Select shoes 3 and 1 and refund = 7^2 + 3^2 = 58
*/
