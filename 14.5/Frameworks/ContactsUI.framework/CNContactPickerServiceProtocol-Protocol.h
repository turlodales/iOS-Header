//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSDictionary;

@protocol CNContactPickerServiceProtocol <NSObject>
- (void)invalidateSelectionAnimated:(_Bool)arg1;
- (void)setupWithOptions:(NSDictionary *)arg1 readyBlock:(void (^)(NSError *))arg2;
@end

