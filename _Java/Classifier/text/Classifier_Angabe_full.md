Classifier
==========

Write a Java program that classifies products based on their price and quality.

## Assignment

A product is considered high quality if its quality rating is 50 or higher, otherwise it is considered low quality. The same product is considered high priced with a price of 50 or above.

Products are furthermore classified as

- junk (low quality, low price)
- rip off (low quality, high price)
- bargain (high quality, low price) and
- luxury (high quality and high price).

Have the user enter both, price and quality and let the program output the correct classifications.


## Console Example

>~~~~
>enter price: \stdin{30}
>enter quality: \stdin{30}
>low price
>low quality
>junk
>~~~~


>~~~~
>enter price: \stdin{80}
>enter quality: \stdin{80}
>high price
>high quality
>luxury
>~~~~


