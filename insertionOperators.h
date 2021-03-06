//implement the insertion operators (i.e. operator<<) for the Container class in this file
//also implement the insertion operators (i.e. operator<<) for the HashingVault class in this file
//their implementations should call the print function of the class
//hint: don't need to include any header in this file
template <typename KeyType, typename ValueType>
ostream& operator<<(ostream& os, Container<KeyType, ValueType>& bst){
	bst.print(os);
	return os;
}


template <typename KeyType, typename ValueType>
ostream& operator<<(ostream& os, HashingVault<KeyType, ValueType>& ha){
	ha.print(os);
	return os;
}

