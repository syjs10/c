int IsEmpty (List L){
	return L -> Next == NULL;
}
int IsLast (Position P, List L){
	return P -> Next == NULL;
}
Position Find (ElementType X, List L) {
	Position P;
	P = L -> Next;
	while (P != NULL && P -> Element != X){
		P = P -> Next;
	}
	return P;
}
void Delete (ElementType X, List L){
	Position P;
	P = FindPrevious (X, L);
	if (!IsLast(P, L)){
		Position TmpCall = P -> Next;
		P -> Next = TmpCall -> Next;
	}
}
void FindPrevious (ElememtType X, List L){
	Position P;
	P = L;
	while (P -> Next != NULL && P -> Next -> Element != NULL){
		P = P -> Next;
	}
	return P;
}
void Insert (ElementTyoe X, List L, Position P){
	Position TmpCell;
	TmpCall = malloce (sizeof (struct Node));
	if (TmpCall == NULL){
		FatalError("Out of space!");
	}
	TmpCall -> Element = X;
	TmpCall -> Next = p -> Next;
	p -> next = TmpCall;
}
