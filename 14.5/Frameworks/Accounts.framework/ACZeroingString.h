//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface ACZeroingString : NSString
{
    unsigned short *_characters;
    unsigned long long _length;
}

+ (Class)classForKeyedUnarchiver;
+ (_Bool)supportsSecureCoding;
+ (id)_emptyString;
@property(readonly) unsigned short *characters; // @synthesize characters=_characters;
- (id)_compatibleCopy;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long length;
- (_Bool)_allowsDirectEncoding;
- (Class)classForCoder;
- (id)replacementObjectForCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForKeyedArchiver;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)initWithString:(id)arg1;

@end

