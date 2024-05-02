## Exp 2

This code defines a class `NQueensSolver` to solve the N-Queens problem. The problem is to place N queens on an N×N chessboard in such a way that no two queens threaten each other. 

1. The class initializes with the size of the chessboard (`n`) and creates an empty board represented by a 2D list.

2. The `is_safe` method checks if it's safe to place a queen at a given position on the board without threatening any other queens.

3. The `solve_n_queens` method recursively tries to place queens on the board row by row, using backtracking if a safe position cannot be found. If a solution is found, it returns the board configuration, otherwise, it returns `None`.

4. An example usage section demonstrates how to instantiate the solver, find a solution, and print it if found, otherwise, it prints a message indicating no solution was found.

Overall, this code effectively implements a backtracking algorithm to solve the N-Queens problem.

## Exp 3

The first part of the code defines a class `Graph` to represent a graph data structure and implements the Depth-Limited Search (DLS) algorithm.

1. The `Graph` class initializes with a given number of vertices and creates an adjacency list representation of the graph.

2. It provides a method `add_edge` to add edges between vertices.

3. The `depth_limited_search` method initiates a depth-limited search from a start node to a goal node with a specified maximum depth.

4. The `_dls` method is a helper function for depth-limited search. It recursively explores the graph up to a certain depth, avoiding revisiting visited nodes.

The second part of the code implements the A* algorithm for pathfinding on a grid.

1. The `astar` function performs the A* search from a start node to a goal node on a given grid.

2. It uses a heuristic function to estimate the cost from the current node to the goal node.

3. `get_neighbors` function retrieves the neighboring nodes of a given node on the grid.

4. `reconstruct_path` function constructs the path from the start node to the goal node using the `came_from` dictionary.

5. An example usage section demonstrates how to use both the `Graph` class with depth-limited search and the A* algorithm for pathfinding on a grid.

Both parts of the code demonstrate different approaches to solve graph-related problems: depth-limited search for general graphs and A* algorithm for pathfinding on grids.


## Exp 4

The provided code is a complete implementation of a genetic algorithm designed to evolve a string that matches the target string "HELLO WORLD". The algorithm simulates natural selection by combining aspects of reproduction, mutation, and selection in the context of genetic fitness based on the specified target string. Here's a breakdown of how the code works:

1. **Initialization**:
   - **`generate_individual(length)`**: Generates a random string of the specified length using the characters A-Z and space.
   - **`generate_population(population_size, target_length)`**: Creates an initial population of random strings.

2. **Fitness Calculation**:
   - **`calculate_fitness(individual)`**: Measures the fitness of an individual string by counting how many characters match the target string at the correct positions.

3. **Selection**:
   - **`selection(population)`**: Selects two parents from the population for breeding, using a weighted selection based on fitness. Higher fitness increases the likelihood of selection.

4. **Crossover**:
   - **`crossover(parent1, parent2)`**: Produces offspring by combining parts of each parent's string. The crossover point is randomly chosen, ensuring genetic diversity.

5. **Mutation**:
   - **`mutation(individual)`**: Introduces random changes to an individual's string at a defined mutation rate (10% in this case). Mutation helps to maintain genetic diversity and potentially discover new and better genetic combinations.

6. **Evolution Process**:
   - The main genetic algorithm function (`genetic_algorithm()`) handles the process of evolving the population over a series of generations. It repeatedly selects parents, performs crossovers to create children, and applies mutations. The population in each generation is entirely replaced by the offspring from the previous generation.
   - The process stops if the perfect match for the target string is found or if it reaches the predefined number of generations (1000 generations in this case).

7. **Logging and Progress Tracking**:
   - Throughout the evolution process, the algorithm prints information about the progress every 100 generations, showing the best string of the current generation and its fitness score.

The output indicates that while the algorithm has made significant progress (e.g., reaching a fitness of 9 by generation 100), it hasn't yet succeeded in perfectly matching the target string "HELLO WORLD" by generation 1000. This demonstrates the exploratory nature of genetic algorithms, where solutions gradually improve over time, often requiring many generations to find optimal solutions or potentially getting stuck in local optima.

## Exp 5

The provided code implements the Minimax algorithm with Alpha-Beta Pruning to determine the optimal move for a player in a hypothetical two-player game. The algorithm is used to minimize the possible loss for a worst-case scenario and is commonly applied in game theory and AI for decision-making processes in games such as chess and tic-tac-toe.

Here's a breakdown of each component of the code:

1. **Constants**:
   - `MAX`, `MIN`: These are set to `1000` and `-1000` respectively, and are used as initial values for the alpha and beta parameters in the Alpha-Beta Pruning process.

2. **Minimax Function**:
   - The function `minimax` is a recursive function designed to explore the game tree by considering all possible moves, predicting the opponent's response, and choosing the optimal strategy based on minimizing losses in a worst-case scenario.
   - **Parameters**:
     - `depth`: Current depth in the game tree.
     - `nodeIndex`: Index of the current node in the game tree.
     - `maximizingPlayer`: Boolean flag indicating whether the current move is for the maximizing player or the minimizing opponent.
     - `values`: List of values at the leaf nodes, which represent the outcomes of different game paths.
     - `alpha`: Best value that the maximizer can guarantee at that level or above.
     - `beta`: Best value that the minimizer can guarantee at that level or above.

3. **Alpha-Beta Pruning**:
   - The alpha-beta pruning is an optimization technique for the minimax algorithm that reduces the number of nodes evaluated in the search tree. It works by passing two extra parameters (`alpha` and `beta`):
     - `alpha`: The best already explored option along the path to the root for the maximizer.
     - `beta`: The best already explored option along the path to the root for the minimizer.
   - If the condition `beta <= alpha` is met, the algorithm prunes the remaining branches in that part of the tree, skipping their evaluation because they won't affect the final decision.

4. **Recursive Tree Exploration**:
   - The algorithm recursively explores all game states down to a specified `depth` of 3 (indicating it looks three moves ahead).
   - Depending on whether the player is maximizing or minimizing the score, the function either looks for the maximum or minimum score respectively from among its child nodes.
   - Each recursive call adjusts the `nodeIndex` to refer to the current position in the game tree (`nodeIndex * 2 + i` for child nodes).

5. **Execution**:
   - In the main block, a set of values is defined which represents the scores at the leaves of the game tree.
   - The `minimax` function is initially called with `maximizingPlayer` set to `True` indicating that the root is considered a move by the maximizing player.
   - It prints the "optimal value" which is the best score the first player can guarantee assuming optimal play by both sides.

This implementation assumes a binary tree structure where each non-leaf node has exactly two children. The leaf nodes' values and the depth of the tree are predefined, making this a demonstration of minimax in a controlled scenario with a fixed depth and leaf node values.

## Exp 6

The provided code defines a simple Constraint Satisfaction Problem (CSP) framework and applies it to a Sudoku puzzle. Here’s a brief breakdown of the major components and how they function together:

1. **CSP Class**:
   - **`__init__`:** Initializes the CSP instance with variables, domains for each variable, and constraints between variables.
   - **`solve`:** Begins the solution process by starting the backtracking algorithm with an empty assignment.
   - **`backtrack`:** The core recursive function for trying to complete an assignment that satisfies all constraints. It checks if the assignment is complete; if not, it selects an unassigned variable and iteratively assigns it values from its domain that are consistent with the current assignment. If an inconsistency is found, it backtracks by removing the last assignment.
   - **`select_unassigned_variable`:** Chooses the next variable to assign a value to. The selection is based on finding the variable with the smallest domain size that hasn't been assigned yet.
   - **`order_domain_values`:** Returns the possible values for a given variable; in this setup, it simply returns the domain values without any specific ordering.
   - **`is_consistent`:** Checks if a value assignment is consistent with the current assignment according to the constraints. This is typically where the logic to enforce Sudoku rules would be implemented.

2. **Sudoku Puzzle Setup**:
   - `puzzle`: A 9x9 grid representing a Sudoku puzzle. Zeros represent empty cells that need to be filled.
   - **`print_sudoku`:** A helper function to print the Sudoku grid in a formatted manner. It adds visual dividers after every third row and column to delineate the 3x3 subgrids.

However, the code provided has gaps:
- The CSP class is missing logic for initializing the specific constraints for Sudoku. Sudoku constraints ensure that each number (1-9) appears exactly once in each row, column, and 3x3 subgrid.
- The domains and constraints for the Sudoku puzzle are not defined in the provided code snippet. To solve a Sudoku puzzle, you need to establish domains for each cell based on the initial numbers provided and set up constraints reflecting the Sudoku rules.
- The `puzzle` variable setup only shows the initial Sudoku grid, but it is not integrated into the CSP instance. This means the CSP class needs further development to handle the puzzle input, initialize variables, domains, and constraints according to the Sudoku rules.

In essence, the provided CSP framework is designed to be adaptable for different types of problems but requires significant modifications and additional implementations to solve a Sudoku puzzle effectively.

## Exp 7

This code snippet defines a simple unification algorithm commonly used in logic programming, natural language processing, and artificial intelligence for solving constraints between symbolic expressions. Here’s a brief breakdown of its components:

1. **`unify_var(var, x, theta)`**:
   - This function tries to unify a variable `var` with some expression `x` under the current substitution `theta` (a dictionary that maps variables to values).
   - It checks if `var` already has a substitution in `theta`. If so, it tries to further unify the substituted value of `var` with `x`.
   - If `x` is also a variable found in `theta`, it attempts to unify `var` with the substitution of `x`.
   - If none of the above, it assigns `x` to `var` in `theta` and returns the updated `theta`.

2. **`unify(x, y, theta)`**:
   - The primary function for unification, handling various cases for inputs `x` and `y`:
     - Returns `None` if `theta` is already `None`, indicating failure in prior unification attempts.
     - Returns the current `theta` if `x` and `y` are identical, as no further unification is needed.
     - If `x` or `y` is a lowercase string (interpreted as a variable), it attempts to unify the variable with the other term using `unify_var`.
     - If both `x` and `y` are lists, it checks if they are of the same length and recursively tries to unify corresponding elements. Unification fails if lists are of different lengths or any element pair fails to unify.
     - Returns `None` for all other cases where `x` and `y` are neither identical nor suitable for variable substitution.

3. **Test Cases**:
   - `unify('x', 'y', {})`: Expected to unify the variable 'x' with 'y', resulting in `{'x': 'y'}`.
   - `unify('x', 'x', {})`: Since both terms are the same, it returns the empty substitution `{}`.
   - `unify(['P', 'x'], ['P', 'y'], {})`: Tries to unify two lists element-wise. The first elements are identical, and it successfully unifies 'x' with 'y', resulting in `{'x': 'y'}`.
   - `unify(['P', 'x'], ['Q', 'y'], {})`: Fails to unify because the first elements of the lists ('P' and 'Q') are different. Thus, it returns `None`.

The implementation correctly handles basic unification tasks for variables and lists, making it a useful building block for systems involving rule-based logic or pattern matching. Further complexity could be added to handle more intricate data types or deeper nested structures as needed in more advanced applications.

## Exp 8

This Python code implements a decision tree algorithm for classification tasks. It includes functions for calculating entropy, information gain, splitting data based on a threshold, recursively building the decision tree, and making predictions using the constructed tree. The code operates under a simplified assumption of binary splits using numeric data. Here's a breakdown of its main components:

1. **`entropy(data)`**:
   - Calculates the entropy of a dataset, which measures the impurity or uncertainty in the dataset. The entropy is computed based on the frequency of each class in the data.
   - Higher entropy values indicate more mixed data, whereas lower values indicate more homogeneous data.

2. **`information_gain(data, feature_index, threshold)`**:
   - Computes the information gain, a metric used to decide which feature and threshold should be used to split the data at each step of building the tree. It's defined as the reduction in entropy after splitting the data based on a specified feature and threshold.
   - The function first splits the data into two subsets (left and right) based on whether feature values are less than or equal to the threshold. It then calculates the weighted average entropy of these subsets and subtracts this from the entropy of the original dataset to determine the information gain.

3. **`split_data(data, feature_index, threshold)`**:
   - Divides the dataset into two parts based on whether the values of a specified feature are less than or greater than a given threshold. This function supports binary splits, essential for the recursive tree-building process.

4. **`build_tree(data)`**:
   - Constructs the decision tree recursively. For each node of the tree, it determines the best feature and threshold to split the data by maximizing information gain. The process continues recursively for each resulting subset until a stopping condition is met (e.g., when all data points in a subset belong to the same class).
   - The recursion ends either when the dataset at a node is pure (all instances have the same class label) or when no further information gain is possible, in which case it chooses the most frequent class label in the current subset.

5. **`predict(tree, point)`**:
   - Uses the constructed decision tree to make predictions. It traverses the tree based on the features of the input point, following branches determined by the thresholds at each node until reaching a leaf node, which provides the class prediction.

6. **Example Execution**:
   - The provided data is a mixture of numerical and categorical values (though the code does not handle categorical splits). The code constructs a decision tree based on this data and then uses the tree to predict the class label for a new data point `[35, "Cloudy"]`. Note that the code as presented will only effectively handle numerical splits and ignore the categorical part unless modified to handle such types of data.

In summary, this code demonstrates a fundamental implementation of a decision tree classifier that could be expanded to handle more complex scenarios, including handling missing values, more sophisticated data splitting methods, and pruning to avoid overfitting.