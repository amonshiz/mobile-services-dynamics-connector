#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "ActivityDisplayable.h"

@interface Task : NSManagedObject <ActivityDisplayable>

@property (nonatomic, strong) NSDate *ms_createdAt;
@property (nonatomic, strong) NSDate *ms_updatedAt;
@property (nonatomic, strong) NSString *ms_version;
@property (nonatomic, strong) NSString *id;
@property (nonatomic, strong) NSString *subject;
@property (nonatomic, strong) NSDate *actualEnd;
@property (nonatomic, strong) NSString *activityTypeCode;
@property (nonatomic, strong) NSString *detail;
@property (nonatomic, strong) NSString *regardingObjectId;

@end
