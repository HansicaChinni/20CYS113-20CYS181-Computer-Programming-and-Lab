Function Main
    Declare Integer i, n, n1, n2, n3
    
    Input n
    Assign n1 = 0
    Assign n2 = 1
    Output n1
    Output n2
    For i = 1 to n-2
        Assign n3 = n1+n2
        Output n3
        Assign n1 = n2
        Assign n2 = n3
    End
End
