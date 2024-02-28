# John is a store manager at a grocery store. He needs to organize various types of products in his inventory efficiently to optimize the shopping experience for his customers. John decides to use arrays to manage his inventory effectively.

## Given the types of products in John's grocery store, how would you represent them using different types of arrays?

One-Dimensional Array:<br>
John decides to use a one-dimensional array to store the names of the products available in his store. Each element of the array represents a single product. For example:

```javascript
products = ["Apples", "Bananas", "Milk", "Bread", "Eggs", "Cereal"]
```

Two-Dimensional Array:<br>
John realizes that some products come in different varieties or sizes. He decides to use a two-dimensional array to store both the product name and its corresponding price. Each row represents a product, and each column represents different attributes (e.g., name, price). For example:

```javascript
products_and_prices = [
    ["Apples", 2.99],
    ["Bananas", 1.99],
    ["Milk", 3.49],
    ["Bread", 2.00],
    ["Eggs", 2.50],
    ["Cereal", 4.99]
]
```

Multi-Dimensional Array:<br>
John further categorizes his products into different sections of the store, such as dairy, fruits, and bakery. He decides to use a multi-dimensional array to represent this structure. Each element of the array contains another array representing the products in that section. For example:

```javascript
store_sections = [
    ["Dairy", ["Milk", "Cheese", "Yogurt"]],
    ["Fruits", ["Apples", "Bananas", "Oranges"]],
    ["Bakery", ["Bread", "Bagels", "Croissants"]]
]
```