//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_os_transaction;

@interface EFProcessTransaction : NSObject
{
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)transactionWithDescription:(id)arg1;
+ (id)log;
- (void).cxx_destruct;
- (void)invalidate;
- (_Bool)extend;
- (id)description;
- (id)initWithDescription:(id)arg1;

@end

