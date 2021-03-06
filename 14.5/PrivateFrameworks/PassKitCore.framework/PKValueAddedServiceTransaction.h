//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString, PKValueAddedMerchant;

@interface PKValueAddedServiceTransaction : NSObject <NSSecureCoding>
{
    _Bool _didSucceed;
    PKValueAddedMerchant *_merchant;
    NSString *_identifier;
    NSString *_merchantURL;
    NSNumber *_terminalApplicationVersion;
    long long _terminalMode;
    NSDate *_transactionDate;
    long long _error;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long error; // @synthesize error=_error;
@property(retain, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
@property(nonatomic) long long terminalMode; // @synthesize terminalMode=_terminalMode;
@property(retain, nonatomic) NSNumber *terminalApplicationVersion; // @synthesize terminalApplicationVersion=_terminalApplicationVersion;
@property(retain, nonatomic) NSString *merchantURL; // @synthesize merchantURL=_merchantURL;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) PKValueAddedMerchant *merchant; // @synthesize merchant=_merchant;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

