//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/DeliveryAccount.h>

@class DAMailAccount;

@interface DADeliveryAccount : DeliveryAccount
{
    DAMailAccount *_DAMailAccount;
}

- (id)mailAccountIfAvailable;
- (void)dealloc;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
- (id)newDeliveryWithMessage:(id)arg1;
- (Class)deliveryClass;
- (id)initWithDAMailAccount:(id)arg1;

@end

