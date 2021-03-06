//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSDictionary, NSString, TPKContent, TPKContentController, TPKContentView, UIImage;

@protocol TPKContentControllerDelegate <NSObject>
- (void)contentController:(TPKContentController *)arg1 didFinishWithContent:(TPKContent *)arg2 animated:(_Bool)arg3;
- (void)contentController:(TPKContentController *)arg1 contentDidBecomeAvailable:(TPKContent *)arg2 animated:(_Bool)arg3;

@optional
- (UIImage *)contentController:(TPKContentController *)arg1 contentView:(TPKContentView *)arg2 iconForCustomizationID:(long long)arg3;
- (void)contentController:(TPKContentController *)arg1 contentViewNeedsLayout:(TPKContentView *)arg2;
- (void)contentController:(TPKContentController *)arg1 eventOccurred:(long long)arg2 content:(TPKContent *)arg3 context:(NSDictionary *)arg4;
- (NSString *)contentController:(TPKContentController *)arg1 personalizedStringForID:(unsigned long long)arg2 content:(TPKContent *)arg3;
- (void)contentController:(TPKContentController *)arg1 actionTapped:(TPKContent *)arg2;
@end

