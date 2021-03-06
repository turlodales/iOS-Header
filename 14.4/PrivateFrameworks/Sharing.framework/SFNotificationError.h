//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSCopying-Protocol.h>
#import <Sharing/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFNotificationError : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_errorDescription;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

