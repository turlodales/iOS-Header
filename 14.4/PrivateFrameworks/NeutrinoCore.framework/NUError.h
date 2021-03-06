//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NUError : NSError
{
}

+ (id)errorWithCode:(long long)arg1 reason:(id)arg2 object:(id)arg3 underlyingError:(id)arg4;
+ (id)errorWithCode:(long long)arg1 reason:(id)arg2 object:(id)arg3;
+ (id)resourceUnavailableError:(id)arg1 object:(id)arg2;
+ (id)timeoutError:(id)arg1 object:(id)arg2;
+ (id)canceledError:(id)arg1 object:(id)arg2;
+ (id)unsupportedError:(id)arg1 object:(id)arg2;
+ (id)duplicateError:(id)arg1 object:(id)arg2;
+ (id)unknownError:(id)arg1 object:(id)arg2;
+ (id)rangeError:(id)arg1 object:(id)arg2;
+ (id)mismatchError:(id)arg1 object:(id)arg2;
+ (id)extraError:(id)arg1 object:(id)arg2;
+ (id)missingError:(id)arg1 object:(id)arg2;
+ (id)invalidError:(id)arg1 object:(id)arg2;
+ (id)failureError:(id)arg1 object:(id)arg2;
+ (id)rootError:(id)arg1;
+ (id)underlyingError:(id)arg1;
@property(readonly) id invalidObject;
@property(readonly) NSString *nonLocalizedFailureReason;
- (id)errorCodeDescription;
- (id)descriptionWithIndent:(long long)arg1;
- (id)description;

@end

