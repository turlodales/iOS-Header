//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TwoLinesBasicOutlineCellModel.h"

#import "HomeCellModel-Protocol.h"
#import "HomeCollectionItemCellModel-Protocol.h"

@class NSArray, NSString, UICollectionViewCellRegistration;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface TwoLinesTransitLineOutlineCellModel : TwoLinesBasicOutlineCellModel <HomeCellModel, HomeCollectionItemCellModel>
{
    NSArray *_accessoryModels;
    id <GEOTransitLine> _transitLine;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GEOTransitLine> transitLine; // @synthesize transitLine=_transitLine;
- (id)accessoryModels;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithTransitLine:(id)arg1 accessoryModels:(id)arg2 backgroundModel:(id)arg3;
@property(readonly, nonatomic) id homeCollectionItem;
@property(readonly, nonatomic) id homeDragAndDropObject;
@property(readonly, nonatomic) id homeActionObject;

// Remaining properties
@property(readonly, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

