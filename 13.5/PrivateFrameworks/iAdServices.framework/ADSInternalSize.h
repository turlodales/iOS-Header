//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAdServices/NSCopying-Protocol.h>
#import <iAdServices/NSSecureCoding-Protocol.h>

@interface ADSInternalSize : NSObject <NSSecureCoding, NSCopying>
{
    float _width;
    float _height;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithWidth:(float)arg1 height:(float)arg2;
- (id)initWithCoder:(id)arg1;

@end

