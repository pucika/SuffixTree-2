#ifndef SUFFIX_TREE_NODE_H_
#define SUFFIX_TREE_NODE_H_
#include <string>
#include <vector>

namespace suffixtree {

class SuffixTreeNode {
	public:
		std::vector<SuffixTreeNode*> GetChildren();

		void AddChild(SuffixTreeNode *node);

	private:
		SuffixTreeNode *parent;

		SuffixTreeNode *suffixLink;

		std::vector<SuffixTreeNode*> children;

		int beg, end;

		int id;
};

}
#endif
