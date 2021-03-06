//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSKit/NSCopying-Protocol.h>

@interface TSKShuffleMapping : NSObject <NSCopying>
{
    vector_12da65de _mapping;
    vector_12da65de _reverseMapping;
    _Bool _reverseMappingValid;
    _Bool _isMoveOperation;
    _Bool _isVertical;
    unsigned int _startIndex;
    unsigned int _endIndex;
    unsigned int _firstMovedIndex;
    unsigned int _destinationIndexForMove;
    unsigned int _numberOfIndexesMoved;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned int numberOfIndexesMoved; // @synthesize numberOfIndexesMoved=_numberOfIndexesMoved;
@property(nonatomic) unsigned int destinationIndexForMove; // @synthesize destinationIndexForMove=_destinationIndexForMove;
@property(nonatomic) unsigned int firstMovedIndex; // @synthesize firstMovedIndex=_firstMovedIndex;
@property(nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(readonly, nonatomic) _Bool isMoveOperation; // @synthesize isMoveOperation=_isMoveOperation;
@property(readonly, nonatomic) unsigned int endIndex; // @synthesize endIndex=_endIndex;
@property(readonly, nonatomic) unsigned int startIndex; // @synthesize startIndex=_startIndex;
@property(readonly, nonatomic) vector_12da65de *mapping; // @synthesize mapping=_mapping;
- (void)swapIndex:(unsigned int)arg1 withIndex:(unsigned int)arg2;
- (void)remove:(unsigned int)arg1 IndexesAtIndex:(unsigned int)arg2;
- (void)insert:(unsigned int)arg1 IndexesAtIndex:(unsigned int)arg2 insertingBefore:(_Bool)arg3;
- (void)applyMappingToIndexSet:(id)arg1;
- (void)enumerateMappingFollowingSwapsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMappingRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isIdentityMapping;
- (_Bool)isMove;
- (unsigned int)reverseMapIndex:(unsigned int)arg1;
- (unsigned int)mapIndex:(unsigned int)arg1;
- (id)sourceIndexes;
- (id)copyInverse;
- (void)p_buildReverseMapping;
- (void)p_invalidateReverseMapping;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)p_copyWithZone:(struct _NSZone *)arg1 mapping:(const vector_12da65de *)arg2;
@property(readonly, nonatomic) unsigned int mappingSize;
- (void)saveToArchive:(struct ShuffleMappingArchive *)arg1;
- (id)initWithArchive:(const struct ShuffleMappingArchive *)arg1;
- (id)initForMovedIndexesStartingAtIndex:(unsigned int)arg1 destinationIndex:(unsigned int)arg2 numberOfIndexes:(unsigned int)arg3 vertical:(_Bool)arg4;
- (id)initWithStartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2;
- (id)initWithStartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2 mapping:(const vector_12da65de *)arg3;

@end

