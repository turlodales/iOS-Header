//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSProgress, PXCMMSession, UIViewController;

@protocol PXCMMActionControllerDelegate <NSObject>
- (NSProgress *)completeMyMomentViewController:(UIViewController *)arg1 performSendBackActionForSession:(PXCMMSession *)arg2;
- (NSProgress *)completeMyMomentViewController:(UIViewController *)arg1 performActionForSession:(PXCMMSession *)arg2;
@end

