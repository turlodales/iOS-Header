//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactActionsController, CNUIUserActionItem, NSArray;

@protocol CNContactActionsControllerDelegate <NSObject>
- (void)contactActionsController:(CNContactActionsController *)arg1 didSelectAction:(CNUIUserActionItem *)arg2;

@optional
- (void)contactActionsController:(CNContactActionsController *)arg1 didUpdateWithMenu:(NSArray *)arg2;
@end

