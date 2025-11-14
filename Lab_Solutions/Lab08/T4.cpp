#include <iostream>
#include <vector>
#include <iomanip>   // For printing doubles cleanly
#include <algorithm> // Not strictly needed for this code, but good practice
// Helper function to print a vector for demonstration
void print_vector(const std::vector<double> &vec, const std::string &name)
{
    std::cout << name << ": { ";
    for (double val : vec)
    {
        std::cout << std::fixed << std::setprecision(1) << val << " ";
    }
    std::cout << "}" << std::endl;
}
// -------------------------------------------------------------------
// Part A: In-Place Modification (Efficiency Mode)
// -------------------------------------------------------------------
/**
 * @brief Scales all elements of the input vector directly (in-place).
 * * @param data The vector to be modified (passed by non-constant reference).
 * @param factor The scaling factor.
 */
void scale_vector_in_place(std::vector<double> &data, double factor)
{
    // We can modify 'data' directly because it is passed by non-constant reference (&).
    for (double &element : data)
    {
        element *= factor;
    }
}
// -------------------------------------------------------------------
// Part B: Immutable Processing (Safety Mode)
// -------------------------------------------------------------------
/**
* @brief Scales all elements and returns a new vector copy, leaving the original unchanged.
* * @param data The vector to be read (passed by constant reference for efficiency and
safety).
* @param factor The scaling factor.
* @return A new vector containing the scaled elements.
*/
std::vector<double> get_scaled_copy(const std::vector<double> &data, double factor)
{
    // Create the new vector that will hold the result.
    std::vector<double> scaled_vector;
    // Reserve space to match the input size for efficiency (optional, but good practice)
    scaled_vector.reserve(data.size());
    // Read from the 'data' vector and write to the new 'scaled_vector'.
    for (double element : data)
    {
        scaled_vector.push_back(element * factor);
    }
    // Return the new vector by value.
    return scaled_vector;
}
// -------------------------------------------------------------------
// Main Function and Demonstration
// -------------------------------------------------------------------
int main()
{
    // --- Setup ---
    double scale_factor = 2.0;
    // --- Test 1 (Part A: In-Place Mode) ---
    std::cout << "--- Test 1: In-Place Modification ---" << std::endl;
    std::vector<double> V1 = {1.0, 5.0, 10.0};
    print_vector(V1, "V1 (Original)"); // V1: { 1.0 5.0 10.0 }
    std::cout << "Calling scale_vector_in_place(V1, 2.0)..." << std::endl;
    scale_vector_in_place(V1, scale_factor);
    // V1 is permanently changed.
    print_vector(V1, "V1 (After modification)"); // V1: { 2.0 10.0 20.0 }
    std::cout << "-------------------------------------" << std::endl
              << std::endl;
    // --- Test 2 (Part B: Safety Mode) ---
    std::cout << "--- Test 2: Immutable Processing ---" << std::endl;
    std::vector<double> V2 = {1.0, 5.0, 10.0};
    print_vector(V2, "V2 (Original)"); // V2: { 1.0 5.0 10.0 }
    std::cout << "Calling get_scaled_copy(V2, 2.0) and storing in V3..." << std::endl;
    std::vector<double> V3 = get_scaled_copy(V2, scale_factor);
    // V2 is unchanged because it was passed as const reference.
    print_vector(V2, "V2 (After processing - UNCHANGED)"); // V2: { 1.0 5.0 10.0 }
    // V3 contains the result returned by value.
    print_vector(V3, "V3 (Scaled Result)"); // V3: { 2.0 10.0 20.0 }
    std::cout << "-------------------------------------" << std::endl;
    return 0;
}
/*
// ===================================================================
// CRITICAL ANALYSIS (Required Comments)
// ===================================================================
// 1. Explain: Why must the parameter in Part A be a non-constant reference
(std::vector<double>&)?
// The parameter must be a non-constant reference because the function's goal is to
CHANGE the
// original vector V1 in the main function. The '&' creates an "alias" to V1, allowing the
function
// to directly modify V1's data in memory. If 'const' were used, the compiler would prevent
modification.
// If passed by value, the function would only modify a temporary copy, and V1 would
remain unchanged.
// 2. Explain: Why must the parameter in Part B be a constant reference (const
std::vector<double>&)?
// The parameter must be a constant reference for two reasons:
// a) Efficiency: The '&' prevents the expensive copying of the large vector V2 when the
function is called.
// b) Safety/Immutability: The 'const' guarantees that the function can READ V2's data but
cannot
// write or change any of its elements, ensuring V2 remains pristine.
*/