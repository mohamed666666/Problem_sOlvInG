from collections import deque


def SearchingChallenge(strParam):
  min_size=3
  window_size=len(strParam)-1
  counter=3
  palindromic_subs=[]
  while window_size >= min_size:
    stak=[]
    for i in range(len(strParam)-counter ):
      sub=strParam[i:len(strParam)-counter+i]
      for i in range(len(sub)):
        if i<len(sub)//2:
          stak.append(sub[i])
        else:
          if(len(stak)>0 ):
            if(stak[len(stak)-1]==sub[i]):
              stak.pop()
      if len(stak)>0:
        palindromic_subs.append(sub)
      else:
        stak=[]
      
    window_size-=1
    counter+=1
  
  if len(palindromic_subs)==0:
    return None
  maxs=0
  for s in palindromic_subs :
    if len(s)>maxs:
      maxs=len(s)
      strParam=s

  return strParam

# keep this function call here 
print(SearchingChallenge(input()))
