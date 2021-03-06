//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class NSArray;

@interface TSPObjectContainer : TSPObject
{
    unsigned char _packageIdentifier;
    NSArray *_childObjects;
}

+ (long long)objectIdentifierForPackageIdentifier:(unsigned char)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *childObjects; // @synthesize childObjects=_childObjects;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)prepareForComponentWriteWithDelayedObjects:(id)arg1;
- (unsigned int)delayedArchivingPriority;
- (_Bool)shouldDelayArchiving;
- (id)packageLocator;
- (long long)tsp_identifier;
- (id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2;
- (id)initWithContext:(id)arg1;

@end

