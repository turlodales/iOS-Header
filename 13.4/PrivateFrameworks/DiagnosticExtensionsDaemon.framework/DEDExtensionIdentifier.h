//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface DEDExtensionIdentifier : NSObject <DEDSecureArchiving, NSSecureCoding>
{
    NSString *_extensionIdentifier;
    long long _invocationNumber;
}

+ (id)archivedClasses;
+ (_Bool)supportsSecureCoding;
+ (id)parseDEDIdentifierString:(id)arg1;
+ (id)log;
- (void).cxx_destruct;
@property long long invocationNumber; // @synthesize invocationNumber=_invocationNumber;
@property(retain) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) NSString *stringValue;
- (id)initWithExtensionIdentifier:(id)arg1 invocationNumber:(long long)arg2;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

