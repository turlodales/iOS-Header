//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBaseLayoutPerformer.h>

#import <PhotosUICore/PXMutableLayoutPerformer-Protocol.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXStackLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer>
{
    NSArray *children;
    long long _layoutAxis;
    struct CGSize _interItemSpacing;
    struct CGSize _itemSize;
}

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) struct CGSize interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(retain, nonatomic) NSArray *children; // @synthesize children;
- (void)_performLayoutPass;
- (struct CGSize)_calculateSizeForLayout;
- (void)prepareForReuse;
- (struct CGSize)performLayout;

// Remaining properties
@property(nonatomic) CDStruct_392cfed4 layoutInput;
@property(retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;

@end

