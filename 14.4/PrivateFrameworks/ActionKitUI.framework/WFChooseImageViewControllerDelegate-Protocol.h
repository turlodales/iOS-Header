//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKitUI/NSObject-Protocol.h>

@class WFChooseImageViewController, WFContentCollection;

@protocol WFChooseImageViewControllerDelegate <NSObject>
- (void)chooseImageControllerDidCancel:(WFChooseImageViewController *)arg1;
- (void)chooseImageController:(WFChooseImageViewController *)arg1 didSelectItems:(WFContentCollection *)arg2;
@end

