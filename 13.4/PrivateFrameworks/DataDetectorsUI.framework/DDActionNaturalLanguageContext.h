//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface DDActionNaturalLanguageContext : NSObject
{
    NSString *_leadingText;
    NSString *_trailingText;
    struct __DDResult *_result;
    NSArray *_associatedResults;
}

- (void).cxx_destruct;
@property(retain) NSArray *associatedResults; // @synthesize associatedResults=_associatedResults;
@property(retain) NSString *trailingText; // @synthesize trailingText=_trailingText;
@property(retain) NSString *leadingText; // @synthesize leadingText=_leadingText;
- (void)dealloc;
@property(retain) struct __DDResult *result; // @synthesize result=_result;

@end

