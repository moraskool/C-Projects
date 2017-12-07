#ifndef POSTFIX_EVALUATOR_H_
#define POSTFIX_EVALUATOR_H_

#include <stack>

#include <string>
#include "Syntax_Error.h"

class Postfix_Evaluator {
	// Public member functions
public:
	/** Evaluates a postfix expression.
	@param expression The expression to be evaluated
	@return The value of the expression
	@throws Syntax_Error if a syntax error is detected
	*/
	int eval(std::string& expression);

	// Private member functions
private:
	/** Evaluates the current operator.
	This function pops the two operands off the operand
	stack and applies the operator.
	@param op A character representing the operator
	@throws Syntax_Error if top is attempted on an empty stack
	*/
	int eval_op(char op);

	/** Determines whether a character is an operator.
	@param ch The character to be tested
	@return true if the character is an operator
	*/
	bool is_operator(char ch) {
		//return OPERATORS.find(ch) != std::string::npos;
		return (ch == ' *' || '+' || '/' || '-');
		
	}

	// Data fields
	char OPERATORS;
	std::stack<int> operand_stack;
};

#endif
