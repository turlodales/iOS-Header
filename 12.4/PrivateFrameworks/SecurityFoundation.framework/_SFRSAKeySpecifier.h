//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFAsymmetricKeySpecifier.h>

@interface _SFRSAKeySpecifier : _SFAsymmetricKeySpecifier
{
    id _rsaKeySpecifierInternal;
}

+ (_Bool)supportsSecureCoding;
+ (Class)keyClass;
- (void).cxx_destruct;
@property(nonatomic) long long bitSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBitSize:(long long)arg1;

@end

