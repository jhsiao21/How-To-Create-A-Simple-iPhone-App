//
//  DetailViewController.h
//  ScaryBugs-Part1
//
//  Created by Logan on 2017/4/6.
//  Copyright © 2017年 com.Logan. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "ScaryBugs_Part1+CoreDataModel.h"
#import "RWTRateView.h"

@class RWTScaryBugDoc;

@interface DetailViewController : UIViewController<UITextFieldDelegate,RWTRateViewDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>

@property (strong, nonatomic) RWTScaryBugDoc *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet RWTRateView *rateView;
@property (strong, nonatomic) UIImagePickerController *picker;

- (IBAction)addPictureTapped:(id)sender;
- (IBAction)titleFieldTextChanged:(id)sender;

@end

