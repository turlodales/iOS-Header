//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class CNContactsEnvironment, CNiOSPersonFetchRequest;
@protocol CNCancelable;

@protocol CNiOSContactAsyncPredicate <CNiOSContactPredicate>
- (id <CNCancelable>)cn_fetchPeopleInAddressBook:(void *)arg1 fetchRequest:(CNiOSPersonFetchRequest *)arg2 progressiveResults:(void (^)(NSArray *, NSDictionary *))arg3 completion:(void (^)(NSError *))arg4 environment:(CNContactsEnvironment *)arg5;
@end

