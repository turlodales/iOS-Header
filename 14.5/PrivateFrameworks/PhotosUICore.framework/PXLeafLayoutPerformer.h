//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBaseLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXLeafLayoutPerformer : PXBaseLayoutPerformer
{
    NSArray *children;
    PXLayoutPerformerOutput *layoutOutput;
    CDStruct_392cfed4 layoutInput;
}

- (void).cxx_destruct;
- (void)setLayoutInput:(CDStruct_392cfed4)arg1;
- (CDStruct_392cfed4)layoutInput;
- (void)setLayoutOutput:(id)arg1;
- (id)layoutOutput;
- (id)children;
- (struct CGSize)performLayout;

@end

