//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

@class UIViewController;
@protocol PXPhotoLibraryPresenting;

@interface PXMessagesRecentPhotosGadgetProvider : PXGadgetProvider
{
    UIViewController<PXPhotoLibraryPresenting> *_recentPhotosViewController;
    double _preferredHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController; // @synthesize recentPhotosViewController=_recentPhotosViewController;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;

@end

