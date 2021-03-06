//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXContentFilterState;
@protocol PXContentFilterController;

@protocol PXContentFilterControllerDelegate <NSObject>
- (void)contentFilterController:(id <PXContentFilterController>)arg1 filterStateChanged:(PXContentFilterState *)arg2;

@optional
- (NSArray *)contentFilterHiddenTypes;
- (void)contentFilterControllerDidComplete:(id <PXContentFilterController>)arg1;
@end

