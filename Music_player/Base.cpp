#include "Base.h"
#include "ArtistList.h"
#include "ItemType.h"
#include "PlayList.h"
#include "SortedList.h"
#include "BinarySearchTree.h"
#include "AlbumType.h"

SortedList<ItemType> Base::m_List;
PlayList Base::m_PlayList;
ArtistList Base::artistList;
BinarySearchTree<AlbumType> Base::albumList;
