//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTAvatarEditorViewController;
@protocol AVTAvatarRecord;

@protocol AVTAvatarEditorViewControllerDelegate <NSObject>
- (void)avatarEditorViewControllerDidCancel:(AVTAvatarEditorViewController *)arg1;
- (void)avatarEditorViewController:(AVTAvatarEditorViewController *)arg1 didFinishWithAvatarRecord:(id <AVTAvatarRecord>)arg2;
@end

