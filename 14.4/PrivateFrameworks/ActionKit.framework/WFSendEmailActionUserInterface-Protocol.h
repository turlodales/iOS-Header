//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFRemoteUserInterface-Protocol.h>

@class NSString, WFSendEmailContent;

@protocol WFSendEmailActionUserInterface <WFRemoteUserInterface>
- (void)showWithEmailContent:(WFSendEmailContent *)arg1 preferredSendingEmailAddress:(NSString *)arg2 isManaged:(_Bool)arg3 completionHandler:(void (^)(WFSendUserInterfaceResult *, NSError *))arg4;
@end

