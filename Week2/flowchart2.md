1. BEGIN [Check Grade]
	INPUT Score
	IF Score >= 80 THEN

    Grade =  A

    ELSE IF Score >= 70 THEN

    Grade = B

    ELSE IF Score >= 60 THEN

    Grade = C

    ELSE IF Score >= 50  THEN

    Grade = D

    Else

    Grade = F

    END IF
	OUTPUT Show Grade 
END



2.BEGIN [Start]

    INPUT a , b

    IF A > B THEN

    Print a

    ELSE

    Print b

    END IF
	OUTPUT End
END


3.BEGIN [Start]

    INPUT N

    PROGRESS i = 1

    While i <= N THEN

    INPUT print i

    i = i + 1

    End While

END
