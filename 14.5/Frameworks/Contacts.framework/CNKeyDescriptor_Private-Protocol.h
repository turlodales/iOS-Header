//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNKeyDescriptor-Protocol.h>

@class CNContactKeyVector, NSString;

@protocol CNKeyDescriptor_Private <CNKeyDescriptor>
- (CNContactKeyVector *)_cn_ignorableKeys;
- (CNContactKeyVector *)_cn_optionalKeys;
- (CNContactKeyVector *)_cn_requiredKeys;
- (void)_cn_executeGetterForRepresentedKeys:(id (^)(NSString *))arg1;

@optional
- (void)_cn_setUnauthorizedKeys:(CNContactKeyVector *)arg1;
- (CNContactKeyVector *)_cn_unauthorizedKeys;
- (NSString *)_cn_recursiveDescriptionWithPrefix:(NSString *)arg1;
@end

