//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@protocol PUPhotoPickerRemoteNavigationControllerDelegate;

@interface PUPhotoPickerRemoteNavigationController : UINavigationController
{
    id <PUPhotoPickerRemoteNavigationControllerDelegate> _remoteViewControllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PUPhotoPickerRemoteNavigationControllerDelegate> remoteViewControllerDelegate; // @synthesize remoteViewControllerDelegate=_remoteViewControllerDelegate;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;

@end

