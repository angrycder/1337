class stack(object):
	"""docstring for stack"""
	def __init__(self, arr):
		super(stack, self).__init__()
		self.arr = arr
		
	def insert(self,value):
		self.arr.append(value)

	def pop(self):
		self.arr.pop()

	def peek(self):
		return self.arr[-1]