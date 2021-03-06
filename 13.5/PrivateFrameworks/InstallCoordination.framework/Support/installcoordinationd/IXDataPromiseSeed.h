//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface IXDataPromiseSeed : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    unsigned long long _creatorIdentifier;
    NSUUID *_uniqueIdentifier;
    unsigned long long _totalBytesNeededOnDisk;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalBytesNeededOnDisk; // @synthesize totalBytesNeededOnDisk=_totalBytesNeededOnDisk;
@property(retain, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) unsigned long long creatorIdentifier; // @synthesize creatorIdentifier=_creatorIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

