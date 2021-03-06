//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKBrowserViewControllerSendDelegate-Protocol.h>

@class NSData, NSString, NSURL, UIViewController;
@protocol CKPluginEntryViewController;

@protocol CKPhotoBrowserViewControllerSendDelegate <CKBrowserViewControllerSendDelegate>
- (void)stageAssetArchive:(NSData *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (NSURL *)workingDraftDirForPluginIdentifier:(NSString *)arg1;
- (NSURL *)workingDirForDraft;
- (void)showPhotosBrowser;
- (void)dismissEntryViewShelf;
- (void)showModalViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)showEntryViewShelf:(UIViewController<CKPluginEntryViewController> *)arg1 forPlugin:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)showEntryViewShelf:(UIViewController<CKPluginEntryViewController> *)arg1;
@end

