def interleave(combined, leftgroup, rightgroup):
    # need to keep combined
    # print combined, leftgroup, rightgroup
    # make a copy, do not modify combined directly
    newgroup = list(combined)
    # if left group is empty
    if (leftgroup == []):
        for i in range(0, len(rightgroup)):
            newgroup.append(rightgroup[i])
        print newgroup
        return
    # if right group is empty
    if (rightgroup == []):
        for i in range(0, len(leftgroup)):
            newgroup.append(leftgroup[i])
        print newgroup
        return
    # neither group is empty
    # pick one from left
    newgroup = list(combined)
    newgroup.append(leftgroup[0])
    llen = len(leftgroup)
    interleave(newgroup, leftgroup[1:llen + 1], rightgroup)

    # pick one from right
    newgroup = list(combined)
    newgroup.append(rightgroup[0])
    rlen = len(rightgroup)
    interleave(newgroup, leftgroup, rightgroup[1:rlen + 1])

def shuffle(k):
    # create the deck
    array = ['A']
    for i in range (2, k + 1):
        array.append(str(i))
    # print array
    for i in range (1, k):
        leftgroup = array[0:i]
        rightgroup = array[i: k + 1]
        # print '---------------------'
        # print leftgroup, rightgroup
        combined = []
        interleave(combined, leftgroup, rightgroup)
