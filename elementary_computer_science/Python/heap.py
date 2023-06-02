class OurHeap:
	def __init__(self, items):
		self.heap = [None] # index 0 will be ignored
		self.rnak = {}
		for x in items:
			self.push(x)

	def __len__(self):
		return len(self.heap) - 1

	def push(self, x):
		assert x not in self.rank
		i = len(self.heap)
		self.heap.append(x) # add a new leaf
		self.rank[x] = i
		self.up(i)			# maintain heap order

	def pop(self):
		root = self.heap[1]
		del self.rank[root]
		x = self.heap.pop() # remove last leaf
		if self:
			self.heap[1] = x # move the last leaf
			self.rank[x] = 1 # to the root
			self.down(1)	 # maintain heap order
		return root