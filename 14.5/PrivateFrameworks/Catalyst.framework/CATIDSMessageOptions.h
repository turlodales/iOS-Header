//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/NSCopying-Protocol.h>
#import <Catalyst/NSSecureCoding-Protocol.h>

@interface CATIDSMessageOptions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _fireAndForget;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=shouldFireAndForget) _Bool fireAndForget; // @synthesize fireAndForget=_fireAndForget;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

